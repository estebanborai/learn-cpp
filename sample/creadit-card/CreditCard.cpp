#include "CreditCard.h"

CreditCard::CreditCard(const std::string& no, const std::string& nm, int lim, double bal) {
  number = no;
  name = nm;
  balance = bal;
  limit = lim;
}

bool CreditCard::chargelt(double price) {
  if (price + balance > double(limit)) {
    return false;
  }

  balance += price;
  return true;
}

void CreditCard::makePayment(double payment) {
  balance -= payment;
}

std::ostream& operator<<(std::ostream& out, const CreditCard& c) {
  out << "Number: " << c.getNumber() << "\n"
      << "Name: " << c.getName() << "\n"
      << "Balance: " << c.getBalance() << "\n"
      << "Limit: " << c.getLimit() << "\n";

  return out;
}