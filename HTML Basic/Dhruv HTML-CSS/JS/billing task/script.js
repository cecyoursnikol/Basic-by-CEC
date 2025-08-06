function addItem() {
    document.getElementById("items").insertAdjacentHTML("beforeend", `
        <div class="items">
            <input type="text" placeholder="Item Name" class="form-ctrl item-name">
            <input type="number" placeholder="Price" class="form-ctrl price" min="0" oninput="calculateBill()">
            <input type="number" placeholder="Qty" value="1" class="form-ctrl quantity" min="1" oninput="calculateBill()">
            <button class="remove-btn" onclick="removeItem(this)"><i class="fas fa-trash"></i></button>
        </div>
    `);
}

function removeItem(button) {
    button.parentElement.remove();
    calculateBill();
}

function calculateBill() {
    let total = 0;

    document.querySelectorAll(".items").forEach((item, index) => {
        const name = item.querySelector(".item-name").value || `Item ${index + 1}`;
        const price = parseFloat(item.querySelector(".price").value) || 0;
        const quantity = parseInt(item.querySelector(".quantity").value) || 1;

        const itemTotal = price * quantity;
        total += itemTotal;
    });

    const discount = parseFloat(document.getElementById("discount").value) || 0;
    const tax = parseFloat(document.getElementById("tax").value) || 0;

    const discountAmount = total * (discount / 100);
    const taxAmount = (total - discountAmount) * (tax / 100);
    total = total - discountAmount + taxAmount;

    const totalAmount = document.getElementById("totalAmount");
    totalAmount.innerText = `$${total.toFixed(2)}`;

    const message = document.getElementById("message");
    message.innerText = "Bill Calculated Successfully!";
    message.style.opacity = "1";
    setTimeout(() => {
        message.style.opacity = "0";
    }, 2000);
}

function payBill() {
    const total = parseFloat(document.getElementById("totalAmount").innerText.replace('$', ''));
    if (total > 0) {
        alert(`Payment of $${total.toFixed(2)} Successful!`);
        clearAll();
    } else {
        alert("No items to pay for!");
    }
}

function clearAll() {
    document.getElementById("items").innerHTML = "";
    document.getElementById("discount").value = "";
    document.getElementById("tax").value = "";
    document.getElementById("totalAmount").innerText = "$0.00";
    document.getElementById("message").innerText = "";
}