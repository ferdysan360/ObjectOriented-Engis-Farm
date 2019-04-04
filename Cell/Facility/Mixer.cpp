//Kelas : Mixer.hpp

#include "Mixer.hpp"

Mixer::Mixer(): Facility('M',1) {

}
        
//prosedur Mix untuk mengkombinasi dua barang/lebih
//ambil tipe masing2 product, terus cek hasil apa, kalau terdefinisi, lanjut, kalau ga keluarin "ga bisa buat"
//kalau lanjut, cek produkSide nya jadinya apa, delete, baru tambahin
//if satu-satu utuk setiap sidePoduct terdefinisi
//ambil index yang lebih gede, hapus dluan, setelah itu hapus yang satu lagi, sebelumnya

void Mixer::Mix(int index1, int index2, List<Product*>* bag) {
    int type1 = bag->get(index1)->getTypeProduct();
    int type2 = bag->get(index2)->getTypeProduct();
    if((type1 == 1 && type2 == 4) || (type1 == 4 && type2 == 1)){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new ChickenRolade());
    }
    else if((type1 == 1 && type2 == 5) || (type1 == 5 && type2 == 1)){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new NasiHainan());
    }
    else if((type1 == 1 && type2 == 6) || (type1 == 6 && type2 == 1)){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new AngsaGeprek());
    }
    else if((type1 == 1 && type2 == 7) || (type1 == 7 && type2 == 1)){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new SapiOmelete());
    }
    else if((type1 == 1 && type2 == 8) || (type1 == 8 && type2 == 1)){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new KudaBakarTelur());
    }
    else if((type1 == 1 && type2 == 9) || (type1 == 9 && type2 == 1)){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new KambingGuling());
    }
    else if((type1 == 1 && type2 == 10) || (type1 == 10 && type2 == 1)){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new SusuTelurMaduJahe());
    }
    else if(type1 == 11 && type2 == 11){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new KapsulEkstrakSusuKuda());
    }
    else if(type1 == 12 && type2 == 12){
        bag->removeIdx(index1);
        bag->removeIdx(index2);
        bag->add(new SusuKambingInstan());
    }
    else{
        std::cout << "SideProduct not Define" << endl;
    }
}
