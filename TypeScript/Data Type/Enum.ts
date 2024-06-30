// TS - Enum

enum StatusCodes {
    NotFound = 404,
    Success = 200,
    Accepted = 202,
    BadRequest = 400
}
console.log(StatusCodes)

let sc = StatusCodes

console.log(sc.Accepted)

enum direction {
    earth = 1,
    west,
    north,
    south,
}

console.log(direction)
console.log(direction.earth)
console.log(direction.south)
