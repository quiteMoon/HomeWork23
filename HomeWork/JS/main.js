class Circle {
    constructor(radius) {
      this._radius = radius;
    }

    get radius() {
      return this._radius;
    }
  
    set radius(value) {
      if (value <= 0) {
        throw new Error('Радіус має бути додатним числом');
      }
      this._radius = value;
    }
  
    get diameter() {
      return this._radius * 2;
    }
  
    getArea() {
      return Math.PI * this._radius ** 2;
    }
  
    getLenght() {
      return 2 * Math.PI * this._radius;
    }
  }

  const circle = new Circle(5);
  console.log('Радіус:', circle.radius);
  console.log('Діаметр:', circle.diameter);
  console.log('Площа:', circle.getArea());
  console.log('Довжина кола:', circle.getLenght());
  
  circle.radius = 10;
  console.log('Новий радіус:', circle.radius);
  console.log('Новий діаметр:', circle.diameter);
  console.log('Нова площа:', circle.getArea());
  console.log('Нова довжина кола:', circle.getLenght());
  