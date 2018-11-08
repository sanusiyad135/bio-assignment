#include <iostream>
#include <stdlib.h>
#include <dos.h>

using namespace std;

int main()
{
    char ch='y';
    int n;
    while(ch=='y'){
            cout<<"|-----------------------------------------------------------------------------TOXIN LIST------------------------------------------------------------------------|\n";
            cout<<" 1.acetonitrile  2.aldrin  3.asbestos  4.bisphenol A  5.cadmium  6.Carbaryl  7.chlordane  8.Chlorofluorocarbons  9.DDT  10.denopezil  11.DICHLORVOS  12.Dieldrin\n 13.diisopropyle methyle phosphonate  14.endosulfan  15.endrin  16.ethylene dibromide  17.formaldehyde  18.heptachlor  19.hexachlorobenzene  20.hydrogen cyanide\n 21.lead  22.mercury  23.methyl bromide  24.Mirex  25.Phthalates  26.POLYCHLORINATED BIPHENYlS  27.sulphur hexafluoride  28.toxaphene \n";
            cout<<"|---------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
            cout<<"\n\nENTER THE CHEMICAL NUMBER : \n";
            cin>>n;
            switch(n){
                case 1:
                    cout<<"\nCHEMICAL NAME :\n"<<"acetonitrile \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C2H3N \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"methanol and acetone \n";
                    cout<<"\nUSES :\n"<<"used to make products like pharmaceuticals,perfumes,acryl nail removers and batteries \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"cyanide poisoning with symptoms pain and tightness in the chest, irregular heartbeat, loss of consciousness and death \n";
                    break;

                case 2:
                    cout<<"\nCHEMICAL NAME :\n"<<"aldrin \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C12H8Cl6 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"acephate, carbaryl, carbofuran, carbosulfan, chlorpyriphos,cypermethrin, diazinon, isofenphos, malathion, methomyl,permethrin, phorate, pirimiphos-methyl, pyrethrum, resmethrin \n";
                    cout<<"\nUSES :\n"<<"pesticides used to control soil insects such as termites \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"Exposure associated with as significant increase in liver and biliary cancer. \n";
                    break;

                 case 3:
                    cout<<"\nCHEMICAL NAME :\n"<<"asbestos \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"Mg3Si2O5(OH) \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"cellulose fibre, polyurethane foams, flour fillers, amorphous silica fabrics \n";
                    cout<<"\nUSES :\n"<<"insulating and fireproof agents \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"effects the lungs \n";
                    break;

                 case 4:
                    cout<<"\nCHEMICAL NAME :\n"<<"bisphenol A \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C15H16O2 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"polycarbonate and polycarbinate & thiol-ene polymers of di(hydroxyphenyl)ethane analogues \n";
                    cout<<"\nUSES :\n"<<"used as a hardener in making polycarbonate plastics and epoxy resins \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"endocrine disruptor, affects growth, reproduction, and development If consumed \n";
                    break;

                 case 5:
                    cout<<"\nCHEMICAL NAME :\n"<<"cadmium \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"Cd \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"physical vapour deposition, IVD aluminium, stainless steel coating \n";
                    cout<<"\nUSES :\n"<<"production of nickel-cadmium (Ni-Cd) rechargeable batteries and as a sacrificial corrosion-protection coating for iron and steel, also used in making alloys, coatings (electroplating), solar cells, plastic stabilisers, and pigments \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"cause nausea, vomiting, diarrhoea and muscle cramps, breathing air with high cadmium concentration causes flu, fever, shortness of breath, lung damage, chest pain, muscle pain and cough \n";
                    break;

                 case 6:
                    cout<<"\nCHEMICAL NAME :\n"<<"Carbaryl \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C12H11NO2 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"AZADIRACHTIN IN NEEM OIL \n";
                    cout<<"\nUSES :\n"<<"PESTICIDE (PRESENT IN SEVIN \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"BLUR RED VISION, NASAL DISCHARGE, SKIN IRRITATION, CONVULSION, SALIVATION, NAUSEA, TREMOR \n";
                    break;

                 case 7:
                    cout<<"\nCHEMICAL NAME :\n"<<"chlordane \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C10H6Cl8 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"acephate, alphamethrin, bendiocarb, carbaryl, carbofuran,carbosulfan, chlorpyriphos, creosote, cyfluthrin, cyromazine,endosulfan, deltamethrin, diazinon\n";
                    cout<<"\nUSES :\n"<<"used as pesticide on agricultural crops, lawns and gardens \n";
                    cout<<"\nSIDE-EFFECTS : \n"<<"convulsions, effects liver, nervous system and digestive system \n";
                    break;

                 case 8:
                    cout<<"\nCHEMICAL NAME :\n"<<"Chlorofluorocarbons \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"CFCl3 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"hydrochloroflurocarbons(HCFCs), hydroflurocarbons(HFCs), \n";
                    cout<<"\nUSES :\n"<<"used in refrigerators \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"Drowsiness, slurred speech, disorientation, tingling sensations and weakness in the limbs.. Ingestion of chlorofluorocarbons can lead to nausea, irritation of the digestive tract and diarrhoea. \n";
                    break;

                 case 9:
                    cout<<"\nCHEMICAL NAME :\n"<<"DDT \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C14H9Cl15 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"acephate, alphacypermethrin, bendiocarb, carbaryl, chlorpyriphos,cyfluthrin, deltamethrin, demethoate, diazinon, dichlorvos, dicofol,endosulfan, etofenprox, esphenvalerate, ehyil azinphos, fenthion \n";
                    cout<<"\nUSES :\n"<<"insecticide \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"a pricklingsensation of the mouth, nausea, dizziness, confusion,headache, lethargy, incoordination, vomiting, fatigue,and tremors \n";
                    break;

                 case 10:
                    cout<<"\nCHEMICAL NAME :\n"<<"denopezil \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C24H29NO3 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"rivastigmine, memantine, galantamine \n";
                    cout<<"\nUSES :\n"<<"Treats Alzheimer's disease \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"Nausea, Diarrhoea, Insomnia, not suitable for people with heart problems \n";
                    break;

                 case 11:
                    cout<<"\nCHEMICAL NAME :\n"<<"DICHLORVOS \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C4H7Cl2O4P \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"spinetoram, chlorantraniliprole, imidacloprid, pymetrozine, spiromesifin \n";
                    cout<<"\nUSES :\n"<<"used to control household, public health, and stored product insects \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"cause burning sensations, or actual burns \n";
                    break;

                 case 12:
                    cout<<"\nCHEMICAL NAME :\n"<<"Dieldrin \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C12H8Cl6O \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"acephate, ethyl-azinphos, bendiocarb, bromophos, carbarylcarbofuran, chlorpyriphos, cyfluthrin, deltamethrin, diazinon,destruction of multilayer of this by atomic oxygen \n";
                    cout<<"\nUSES :\n"<<"Used in agriculture for the control of soil insects and numerous pest vectors of ailment. \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"Causes headaches, dizziness, vomiting or uncontrollable muscle movements. \n";
                    break;

                 case 13:
                    cout<<"\nCHEMICAL NAME :\n"<<"diisopropyle methyle phosphonate \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C7H17O3P \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"destruction of multilayer of this by atomic oxygen \n";
                    cout<<"\nUSES :\n"<<"No commercial use. \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"Skin rashes and other signs of irritation. Effects on the blood and nervous systems \n";
                    break;

                 case 14:
                    cout<<"\nCHEMICAL NAME :\n"<<"endosulfan \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C9H6Cl6O3S \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"BENDIOCARB,diflubenzuron \n";
                    cout<<"\nUSES :\n"<<"insecticide ,wood preservative \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"Incoordination, even a loss of the ability to stand, gagging, vomiting, diarrhoea, agitation, convulsions and loss of consciousness. \n";
                    break;

                 case 15:
                    cout<<"\nCHEMICAL NAME :\n"<<"endrin \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C12H8Cl6O \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"carbaryl,chlorpyriphos \n";
                    cout<<"\nUSES :\n"<<"used as an insecticide on crops such as cotton, sugarcane, rice, cereals and grain \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"headache, dizziness, confusion, nausea, vomiting and convulsions, skin irritation, \n";
                    break;

                 case 16:
                    cout<<"\nCHEMICAL NAME :\n"<<"ethylene dibromide \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C2H4Br2 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"methyl bromide \n";
                    cout<<"\nUSES :\n"<<"Used in the treatment of felled logs for bark beetles and termites, and control of wax moths in beehives. \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"Causes depression, collapse,blistering,headache \n";
                    break;

                 case 17:
                    cout<<"\nCHEMICAL NAME :\n"<<"formaldehyde \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"CH2O \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"phenoxyethanol \n";
                    cout<<"\nUSES :\n"<<"used in shampoo, nail polish, lipstick etc \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"causes cancer \n";
                    break;

                 case 18:
                    cout<<"\nCHEMICAL NAME :\n"<<"heptachlor \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C10H5Cl7 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"acephate, bendiocarb, carbaryl, carbofuran, carbosulfan,chlorpyriphos, cyfluthrin, diazinon \n";
                    cout<<"\nUSES :\n"<<"Used in  products having specific application of fire ant control in underground transformers \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"irritability, salivation, lethargy, dizziness, labored respiration, muscle tremors and convulsions  \n";
                    break;

                 case 19:
                    cout<<"\nCHEMICAL NAME :\n"<<"hexachlorobenzene \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C6Cl6 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"bitertanol, carboxin, fuberidazol, quazatine \n";
                    cout<<"\nUSES :\n"<<"used in the production of rubber, aluminium, and dyes and in wood preservation \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"thyroid, liver and kidney cancer and oral exposure in animals \n";
                    break;

                 case 20:
                    cout<<"\nCHEMICAL NAME :\n"<<"hydrogen cyanide \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"HCN \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"sodium nitrite \n";
                    cout<<"\nUSES :\n"<<"pesticide \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"liver tumors \n";
                    break;

                 case 21:
                    cout<<"\nCHEMICAL NAME :\n"<<"lead \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"Pb \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"ZAMA, polymer tungsten \n";
                    cout<<"\nUSES :\n"<<"used in batteries, Lead roof covering and lead flashing, electrodes etc.. \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"causes poisoning \n";
                    break;

                 case 22:
                    cout<<"\nCHEMICAL NAME :\n"<<"mercury \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"Hg \n";
                    cout<<"\nINFO 1 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"Lead ballast hydrometers \n";
                    cout<<"\nUSES :\n"<<"Hydrometers \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"damage to the brain, kidneys and lungs, and causes acrodynia \n";

                    cout<<"\nINFO 2 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"digital or aneroid blood pressure meter \n";
                    cout<<"\nUSES :\n"<<"used in blood pressure meter \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"damage to the brain, kidneys and lungs, and causes acrodynia \n";

                    cout<<"\nINFO 3 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"Spirit-filled glass bulb or digital hygrometers \n";
                    cout<<"\nUSES :\n"<<"Hygrometers \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"damage to the brain, kidneys and lungs, and causes acrodynia \n";

                    cout<<"\nINFO 4 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"Digital, gallium-indium-tin thermometers, dot matrix thermometers, or alcohol thermometers \n";
                    cout<<"\nUSES :\n"<<"Thermometers \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"damage to the brain, kidneys and lungs, and causes acrodynia \n";

                    cout<<"\nINFO 5 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"Air-controlled, reed switch, vapor-filled diaphragm, snap-switch, or programmable digital thermostats \n";
                    cout<<"\nUSES :\n"<<"Thermostats \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"damage to the brain, kidneys and lungs, and causes acrodynia \n";

                    cout<<"\nINFO 6 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"Electronic or aneroid gauges \n";
                    cout<<"\nUSES :\n"<<"Mercury gauges \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"damage to the brain, kidneys and lungs, and causes acrodynia \n";

                    cout<<"\nINFO 7 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"Magnetic dry reed switches, optic sensors, and mechanical switch \n";
                    cout<<"\nUSES :\n"<<"Float control switches \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"damage to the brain, kidneys and lungs, and causes acrodynia \n";

                    cout<<"\nINFO 8 \n";
                    cout<<"\nUSES :\n"<<"Used in the chemical industry as catalysts and some electrical switches and rectifier. Used for production of batteries, fluorescent lights etc. \n";


                    break;

                 case 23:
                    cout<<"\nCHEMICAL NAME :\n"<<"methyl bromide \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"CH3Br \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"65% dichloropropene and 35%chloropicrin \n";
                    cout<<"\nUSES :\n"<<"used as a gas fumigant against insects, termites, rodents, weeds, nematodes, and soil-borne diseases \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"skin and eye irritation,  damage to the nervous system \n";
                    break;

                 case 24:
                    cout<<"\nCHEMICAL NAME :\n"<<"Mirex \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C10Cl12 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"carbaryl, deltamethrin, diazinon, diflubenzuron, sulfuramid \n";
                    cout<<"\nUSES :\n"<<"Insecticide to combat leaf cutters in South America, harvester termites in South Africa, Western Harvester ants in the US etc \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"decreased body weight, hepatomegaly, induction of mixed function oxidases, and morphological changes in liver cells of animals \n";
                    break;

                 case 25:
                    cout<<"\nCHEMICAL NAME :\n"<<"Phthalates \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C8H4O4 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"DINCH, ATBC, DOTP, TXIB,TOTM, DEHA, \n";
                    cout<<"\nUSES :\n"<<"used in leaching \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"disrupting hormones \n";
                    break;

                 case 26:
                    cout<<"\nCHEMICAL NAME :\n"<<"POLYCHLORINATED BIPHENYlS \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C12H(10-x)Clx \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"tetrachlorbenzene, chloroalkylene, phenylxylethane, diphenyl oxide \n";
                    cout<<"\nUSES :\n"<<"Used in the production of electrical products as transformers, capacitors etc \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"may cause chloracne--small, pale, yellow skin lesions that may last from weeks to years. It can also cause birth defects \n";
                    break;

                 case 27:
                    cout<<"\nCHEMICAL NAME :\n"<<"sulphur hexafluoride \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"SF6 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"nitrous oxide \n";
                    cout<<"\nUSES :\n"<<" Used mainly as test gas in respiratory physiology. Other uses include its injection in vitreoretinal surgery to restore the vitreous chamber and as a tracer in monitoring the dispersion and deposition of air pollutants. \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"Peripheral Nerve and Sensation: Flaccid paralysis with appropriate anesthesia . Muscle weakness \n";
                    break;

                 case 28:
                    cout<<"\nCHEMICAL NAME :\n"<<"toxaphene \n";
                    cout<<"\nCHEMICAL FORMULA :\n"<<"C10H8Cl8 \n";
                    cout<<"\nSUBSTITUTES OR ALTERNATIVES :\n"<<"alachlor, chlorpyriphos, demethoate, trifluralyn, metribuzin \n";
                    cout<<"\nUSES :\n"<<"used as pesticides to control insect pests on cotton \n";
                    cout<<"\nSIDE-EFFECTS :\n"<<"convulsive seizures, respiratory failure, liver and kidney cancer \n";
                    break;


                default :
                    cout<<"\nSorry.. :( there is no chemical for this Number in the list....\n";

            }
            cout<<"\n\n\n";
           cout<<"\nDo you wanna check more?? (y/n)\n";
           cin>>ch;
           system("cls");
    }
    cout<<"\n\n\n\n                                                                          Good Bye... \n\n\n\n";
    system("pause");

    return 0;
}
