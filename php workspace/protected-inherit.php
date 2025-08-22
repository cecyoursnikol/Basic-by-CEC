<?php
// Base class: ATM
class ATM {
    protected $balance;

    public function __construct($initialBalance) {
        $this->balance = $initialBalance;
    }

    protected function deposit($amount) {
        $this->balance += $amount;
        echo "Deposited ₹$amount. New balance: ₹{$this->balance}<br>";
    }

    protected function withdraw($amount) {
        if ($amount <= $this->balance) {
            $this->balance -= $amount;
            echo "Withdrew ₹$amount. New balance: ₹{$this->balance}<br>";
        } else {
            echo "Insufficient balance. Withdrawal failed.<br>";
        }
    }

    public function showBalance() {
        echo "Current balance: ₹{$this->balance}<br>";
    }
}

// Derived class: UserATM
class UserATM extends ATM {
    public function performDeposit($amount) {
        $this->deposit($amount); // Accessing protected method
    }

    public function performWithdrawal($amount) {
        $this->withdraw($amount); // Accessing protected method
    }
}

// Usage
$user = new UserATM(5000); // Initial balance ₹5000
$user->showBalance();
$user->performDeposit(1500);
$user->performWithdrawal(2000);
$user->performWithdrawal(6000); // Should fail due to insufficient balance
$user->showBalance();
?>