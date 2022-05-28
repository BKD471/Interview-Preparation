function filterByCity(arr) {
  const res = arr.filter((obj) => {
    const city = obj.city.toLowerCase();
    return city === "bangalore" || city === "hyderabad";
  });

  return res;
}

arr = [
  { name: "John", city: "delhi" },
  { name: "Peter", city: "bangalore" },
  { name: "Mike", city: "Bangalore" },
  { name: "Rachel", city: "Hyderabad" },
];
console.log(filterByCity(arr));

const date1 = new Date("Thu, 01 Jan 1970 00:00:00 GMT");
console.log(date1);
