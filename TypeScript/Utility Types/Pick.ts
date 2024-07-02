interface Product {
    id: number;
    name: string;
    price: number;
    description: string;
}

const productDetails: Pick<Product, "id" | "name"> = { id: 100, name: "T-Shirt" };

console.log(productDetails);

