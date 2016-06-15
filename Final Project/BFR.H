#ifndef BFR_H
#define BFR_H
#include <string>

struct Vendor
{
    std::string name;
    int id;
    int totalDonations;
};

class BFR
{
    public:
        BFR(int);
        int openFile();
        int openFileTwo();
        ~BFR();
        void showVendorDetails();
        void vendorDetailsByID(int);
        void vendorDetailsByName(std::string);


    protected:
    private:
        Vendor vendors[90];
        int vendorLocation(int);
        int vendorLocation(std::string);
        int numberOfVendors;
        //org get
        std::string idDonor[90];
        std::string nameDonor[90];
        std::string type[90];
        std::string typeDonor[90];
        //data get
        int idDonorDonation[10600];
        int idVolunteer[10600];
        int idRecipient[10600];
        //
        int orgCount;
        std::string csvOrgData;
        int counter;
        std::string temp;

};

#endif // BFR_H
