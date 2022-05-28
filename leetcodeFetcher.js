const getApiData = async () => {
  let res = await fetch(
    "https://run.mocky.io/v3/511fa794-6bfb-4c9f-9adb-9e18d62d7003"
  );
  let data = await res.json();
  return data;
};
let apiData = await getApiData();
let questionList = apiData.problemsetQuestionList.questions;

const getTableRow = (title, acRate, difficulty) => {
  const tr = document.createElement("tr");
  tr.innerHTML = `
           <td>${title}</td>
           <td>${acRate}</td>
           <td>${difficulty}</td>
   `;
  return tr;
};

const populateTable = async (questions) => {
  const tableBody = document.querySelector("#table-body");
  tableBody.innerHTML = "";

  questions.forEach((element) => {
    let { title, acRate, difficulty } = element;
    let tr = getTableRow(title, acRate, difficulty);
    tableBody.appendChild(tr);
  });
};
populateTable(questionList);

const sortByAcceptance = (questionList) => {
  let finalArray = questionList.sort((a, b) => a.acRate - b.acRate);
  populateTable(finalArray);
};

let acceptanceCol = document.querySelector(
  "#questions-table>thead>tr>th:nth-child(2)"
);
acceptanceCol.addEventListener("click", () => {
  let sortedList = sortByAcceptance(questionList);
});
