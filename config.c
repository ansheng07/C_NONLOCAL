#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>

int main()
{
using namespace std;

boost::property_tree::ptree pt;
boost::property_tree::ini_parser::read_ini("config.txt", pt);
int NN;double u;double E;double a_size;int l;double jj; int n;int z1;int z2;double B; double Nr; double R_max;double Vv;double rv;double av;double Wv;double rwv;double awv;double Vd; double rvd;double avd;double Wd;double rwd;double awd;double Vso;double Rso;double aso;double Wso;double Rwso;double awso;double beta;double Vv1;double rv1;double av1;double Wv1;double rwv1;double awv1;double Vd1;double rvd1;double avd1;double Wd1;double rwd1;double awd1;double Vso1;double Rso1;double aso1;double Wso1;double Rwso1;double awso1;



NN=pt.get<int>("Numerical.NN") ;
u=pt.get<double>("Numerical.u") ;
E=pt.get<double>("Numerical.E") ;
a_size=pt.get<double>("Numerical.a_size") ;
l=pt.get<int>("Numerical.l") ;
jj=pt.get<double>("Numerical.jj");
n=pt.get<int>("Numerical.n");
z1=pt.get<int>("Numerical.z1");
z2=pt.get<int>("Numerical.z2");
B=pt.get<double>("Numerical.B") ;
Nr=pt.get<double>("Numerical.Nr");
R_max=pt.get<double>("Numerical.R_max");


Vv=pt.get<double>("local.Vv") ;
rv=pt.get<double>("local.rv") ;
av=pt.get<double>("local.av") ;
Wv=pt.get<double>("local.Wv") ;
rwv=pt.get<double>("local.rwv") ;
awv=pt.get<double>("local.awv");

Vd=pt.get<double>("local.Vd");
rvd=pt.get<double>("local.rvd");
avd=pt.get<double>("local.avd");

Wd=pt.get<double>("local.Wd") ;
rwd=pt.get<double>("local.rwd");
awd=pt.get<double>("local.awd");
Vd=pt.get<double>("local.Vd");
Vso=pt.get<double>("local.Vso");
Rso=pt.get<double>("local.Rso");
Wso=pt.get<double>("local.Wso") ;
Rwso=pt.get<double>("local.Rwso");
awso=pt.get<double>("local.awso");

Vv1=pt.get<double>("Non_local.Vv1") ;
rv1=pt.get<double>("Non_local.rv1") ;
av1=pt.get<double>("Non_local.av1") ;
Wv1=pt.get<double>("Non_local.Wv1") ;
rwv1=pt.get<double>("Non_local.rwv1") ;
awv1=pt.get<double>("Non_local.awv1");
Vd1=pt.get<double>("Non_local.Vd1");
rvd1=pt.get<double>("Non_local.rvd1");
avd1=pt.get<double>("Non_local.avd1");
Wd1=pt.get<double>("Non_local.Wd1") ;
rwd1=pt.get<double>("Non_local.rwd1");
awd1=pt.get<double>("Non_local.awd1");
Vd1=pt.get<double>("Non_local.Vd1");
Vso1=pt.get<double>("Non_local.Vso1");
Rso1=pt.get<double>("Non_local.Rso1");
Wso1=pt.get<double>("Non_local.Wso1") ;
Rwso1=pt.get<double>("Non_local.Rwso1");
awso1=pt.get<double>("Non_local.awso1");

cout<<NN<<endl;
cout << pt.get<double>("Non_local.rvd1") << std::endl;
cout << pt.get<double>("Non_local.avd1") << std::endl;

}
