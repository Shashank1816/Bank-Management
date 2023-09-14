#include <iostream>
#include <string>

class CreditApply {
private:
    int id;
    int acnumber;
    std::string requesttype;
    std::string panno;
    int monthlyincome;
    std::string employer;
    std::string approval;

public:
    // Constructor with parameters
    CreditApply(int id, int acnumber, const std::string& requesttype, const std::string& panno, int monthlyincome, const std::string& employer, const std::string& approval)
        : id(id), acnumber(acnumber), requesttype(requesttype), panno(panno), monthlyincome(monthlyincome), employer(employer), approval(approval) {}

    // Default constructor
    CreditApply() : id(0), acnumber(0), monthlyincome(0) {}

    // Getter and Setter methods
    int getId() const {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }

    int getAcnumber() const {
        return acnumber;
    }

    void setAcnumber(int acnumber) {
        this->acnumber = acnumber;
    }

    const std::string& getRequesttype() const {
        return requesttype;
    }

    void setRequesttype(const std::string& requesttype) {
        this->requesttype = requesttype;
    }

    const std::string& getPanno() const {
        return panno;
    }

    void setPanno(const std::string& panno) {
        this->panno = panno;
    }

    int getMonthlyincome() const {
        return monthlyincome;
    }

    void setMonthlyincome(int monthlyincome) {
        this->monthlyincome = monthlyincome;
    }

    const std::string& getEmployer() const {
        return employer;
    }

    void setEmployer(const std::string& employer) {
        this->employer = employer;
    }

    const std::string& getApproval() const {
        return approval;
    }

    void setApproval(const std::string& approval) {
        this->approval = approval;
    }

    // ToString method
    std::string toString() const {
        return "CreditApply [id=" + std::to_string(id) + ", acnumber=" + std::to_string(acnumber) + ", requesttype=" + requesttype + ", panno=" + panno
            + ", monthlyincome=" + std::to_string(monthlyincome) + ", employer=" + employer + ", approval=" + approval + "]";
    }
};

int main() {
    // Example usage
    CreditApply credit(1, 12345, "Loan", "ABC123", 5000, "Company XYZ", "Approved");
    std::cout << credit.toString() << std::endl;

    return 0;
}
