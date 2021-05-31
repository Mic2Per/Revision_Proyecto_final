#include <mysql.h>
#include <iostream>
using namespace std;
int q_estado;
int main()
{
    MYSQL* conectar;
    MYSQL_ROW fila;
    MYSQL_RES* resultado;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "qkracha2001", "super_mercado", 3306, NULL, 0);
    if (conectar) {
        cout << "Conexion exitosa" << endl;
        int op;
        do {
            cout << "----------------Menu----------------" << endl;
            cout << "1. Menu de la Tabla Puestos" << endl;
            cout << "2. Menu de la Tabla Clientes" << endl;
            cout << "3. Menu de la Tabla Proveedores" << endl;
            cout << "4. Menu de la Tabla Marcas" << endl;
            cout << "5. Menu de la Tabla Empleados" << endl;
            cout << "6. Menu de la Tabla Productos" << endl;
            cout << "7. Menu de la Tabla Ventas" << endl;
            cout << "8. Menu de la Tabla Compras" << endl;
            cout << "Precione 9 para salir" << endl;
            cin >> op;
            cout << "\n";

            switch (op) {
            case 1:
            {
                string insert, puestoP, puestoP2, consulta, actualizar, eliminar;
                const char* a;
                const char* aa;
                int op1;
                cout << "1. crear" << endl;
                cout << "2. Leer" << endl;
                cout << "3. Actualizar" << endl;
                cout << "4. Borrar" << endl;
                cin >> op1;
                cout << "\n";

                switch (op1) {
                case 1:
                    cout << "Ingrese el puesto: ";
                    cin >> puestoP;
                    insert = "insert into puestos(puesto) values('" + puestoP + "');";
                    a = insert.c_str();
                    q_estado = mysql_query(conectar, a);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 2:
                    consulta = "select * from super_mercado.puestos";
                    aa = consulta.c_str();
                    q_estado = mysql_query(conectar, aa);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    break;

                case 3:
                    consulta = "select * from super_mercado.puestos";
                    aa = consulta.c_str();
                    q_estado = mysql_query(conectar, aa);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a modificar: ";
                    cin >> actualizar;
                    cout << "Ingrese el puesto: ";
                    cin >> puestoP2;
                    insert = "update puestos set puesto = '" + puestoP2 + "' where idPuesto= " + actualizar + "";
                    a = insert.c_str();
                    q_estado = mysql_query(conectar, a);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 4:
                    consulta = "select * from super_mercado.puestos";
                    aa = consulta.c_str();
                    q_estado = mysql_query(conectar, aa);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a eliminar: ";
                    cin >> eliminar;
                    insert = "delete from puestos where idPuesto=" + eliminar + "";
                    a = insert.c_str();
                    q_estado = mysql_query(conectar, a);
                    if (!q_estado) {
                        cout << "Registro eliminado" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                }
            }
                break;

            case 2:
            {
                int op2;
                string insert2, nombresC, nombresC2, apellidosC, apellidosC2, nitC, nitC2, generoC, generoC2, telefono, telefono2, correo, correo2, fechaC, fechaC2, consulta2, actualizar2, eliminar2;
                const char* b;
                const char* bb;
                cout << "1. crear" << endl;
                cout << "2. Leer" << endl;
                cout << "3. Actualizar" << endl;
                cout << "4. Borrar" << endl;
                cin >> op2;
                cout << "\n";

                switch (op2) {
                case 1:
                    cout << "Ingrese los nombres del cliente: ";
                    cin >> nombresC;
                    cout << "Ingrese el apellido del cliente: ";
                    cin >> apellidosC;
                    cout << "Ingrese el nit del cliente: ";
                    cin >> nitC;
                    cout << "Ingrese el genero (M: Mujer, H: Hombre): ";
                    cin >> generoC;
                    cout << "Ingrese el telefono: ";
                    cin >> telefono;
                    cout << "Ingrese el correo: ";
                    cin >> correo;
                    cout << "Ingrese la fecha de ingreso: ";
                    cin >> fechaC;
                    insert2 = "insert into clientes(nombres,apellidos,NIT,genero,telefono,correo_electronico,fechaingreso) values('" + nombresC + "','" + apellidosC + "','" + nitC +"','" + generoC +"','" + telefono +"','" + correo +"','" + fechaC +"');";
                    b= insert2.c_str();
                    q_estado = mysql_query(conectar, b);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 2:
                    consulta2 = "select * from super_mercado.clientes";
                    bb = consulta2.c_str();
                    q_estado = mysql_query(conectar, bb);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    break;

                case 3:
                    consulta2 = "select * from super_mercado.clientes";
                    bb = consulta2.c_str();
                    q_estado = mysql_query(conectar, bb);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a modificar: ";
                    cin >> actualizar2;
                    cout << "Ingrese los nombres del cliente: ";
                    cin >> nombresC2;
                    cout << "Ingrese el apellido del cliente: ";
                    cin >> apellidosC2;
                    cout << "Ingrese el nit del cliente: ";
                    cin >> nitC2;
                    cout << "Ingrese el genero (M: Mujer, H: Hombre): ";
                    cin >> generoC2;
                    cout << "Ingrese el telefono: ";
                    cin >> telefono2;
                    cout << "Ingrese el correo: ";
                    cin >> correo2;
                    cout << "Ingrese la fecha de ingreso: ";
                    cin >> fechaC2;
                    insert2 = "update clientes set nombres = '" + nombresC2 + "',apellidos = '" + apellidosC2 + "',NIT = '" + nitC2 +"',genero = '" + generoC2 +"',telefono = '" + telefono2 +"',correo_electronico = '" + correo2 +"',fechaingreso = '" + fechaC2 +"' where idClientes= " + actualizar2 + "";
                    bb = insert2.c_str();
                    q_estado = mysql_query(conectar, bb);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 4:
                    consulta2 = "select * from super_mercado.clientes";
                    bb = consulta2.c_str();
                    q_estado = mysql_query(conectar, bb);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a eliminar: ";
                    cin >> eliminar2;
                    insert2 = "delete from clientes where idClientes=" + eliminar2 + "";
                    bb = insert2.c_str();
                    q_estado = mysql_query(conectar, bb);
                    if (!q_estado) {
                        cout << "Registro eliminado" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                }
            }
                break;

            case 3:
            {
                int op3;
                string insert3, proveedor, proveedor2, nitP, nitP2, direccionP, direccionP2, telefonoP, telefonoP2, consulta3, actualizar3, eliminar3;
                const char* c;
                const char* cc;
                cout << "1. crear" << endl;
                cout << "2. Leer" << endl;
                cout << "3. Actualizar" << endl;
                cout << "4. Borrar" << endl;
                cin >> op3;
                cout << "\n";

                switch (op3) {
                case 1:
                    cout << "Ingrese los nombres del proveedor: ";
                    cin >> proveedor;
                    cout << "Ingrese el nit: ";
                    cin >> nitP;
                    cout << "Ingrese la direccion: ";
                    cin >> direccionP;
                    cout << "Ingrese el telefono: ";
                    cin >> telefonoP;
                    insert3 = "insert into proveedores(proveedor,nit,direccion,telefono) values('" + proveedor + "','" + nitP + "','" + direccionP + "','" + telefonoP + "');";
                    c = insert3.c_str();
                    q_estado = mysql_query(conectar, c);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 2:
                    consulta3 = "select * from super_mercado.proveedores";
                    cc = consulta3.c_str();
                    q_estado = mysql_query(conectar, cc);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    break;

                case 3:
                    consulta3 = "select * from super_mercado.proveedores";
                    cc = consulta3.c_str();
                    q_estado = mysql_query(conectar, cc);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a modificar: ";
                    cin >> actualizar3;
                    cout << "Ingrese los nombres del cliente: ";
                    cin >> proveedor2;
                    cout << "Ingrese el apellido del cliente: ";
                    cin >> nitP2;
                    cout << "Ingrese el nit del cliente: ";
                    cin >> direccionP2;
                    cout << "Ingrese el genero (M: Mujer, H: Hombre): ";
                    cin >> telefonoP2;
                    insert3 = "update proveedores set proveedor = '" + proveedor2 + "',nit = '" + nitP2 + "',direccion = '" + direccionP2 + "',telefono = '" + telefonoP2 + "' where idClientes= " + actualizar3 + "";
                    cc = insert3.c_str();
                    q_estado = mysql_query(conectar, cc);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 4:
                    consulta3 = "select * from super_mercado.proveedores";
                    cc = consulta3.c_str();
                    q_estado = mysql_query(conectar, cc);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a eliminar: ";
                    cin >> eliminar3;
                    insert3 = "delete from proveedores where idProveedores=" + eliminar3 + "";
                    cc = insert3.c_str();
                    q_estado = mysql_query(conectar, cc);
                    if (!q_estado) {
                        cout << "Registro eliminado" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                }
            }
                break;

            case 4:
            {
                int op4;
                string insert4 , marcaM, marcaM2, consulta4, actualizar4, eliminar4;
                const char* d;
                const char* dd;
                cout << "1. crear" << endl;
                cout << "2. Leer" << endl;
                cout << "3. Actualizar" << endl;
                cout << "4. Borrar" << endl;
                cin >> op4;
                cout << "\n";

                switch (op4) {
                case 1:
                    cout << "Ingrese la marca: ";
                    cin >> marcaM;
                    insert4 = "insert into (marca) values('" + marcaM + "')";
                    d = insert4.c_str();
                    q_estado = mysql_query(conectar, d);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 2:
                    consulta4 = "select * from marcas";
                    dd = consulta4.c_str();
                    q_estado = mysql_query(conectar, dd);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    break;

                case 3:
                    consulta4 = "select * from marcas";
                    dd = consulta4.c_str();
                    q_estado = mysql_query(conectar, dd);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a modificar: ";
                    cin >> actualizar4;
                    cout << "Ingrese la marca: ";
                    cin >> marcaM2;
                    insert4 = "update marcas set marca = '" + marcaM2 + "' where idMarca= " + actualizar4 + "";
                    d = insert4.c_str();
                    q_estado = mysql_query(conectar, d);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 4:
                    consulta4 = "select * from marcas";
                    dd = consulta4.c_str();
                    q_estado = mysql_query(conectar, dd);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a eliminar: ";
                    cin >> eliminar4;
                    insert4 = "delete from marcas where idMarca=" + eliminar4 + "";
                    d = insert4.c_str();
                    q_estado = mysql_query(conectar, d);
                    if (!q_estado) {
                        cout << "Registro eliminado" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                }
            }
                break;

            case 5:
            {
                int op5;
                string insert5, nombresE, nombresE2, apellidosE, apellidosE2, direccionE, direccionE2, telefonoE, telefonoE2, dpi, dpi2, generoE, generoE2, puestoE, puestoE2, fechaE, fechaE2, fechaE3, fechaE4, fechaE5, fechaE6, consulta5, actualizar5, eliminar5;
                const char* e;
                const char* ee;
                cout << "1. crear" << endl;
                cout << "2. Leer" << endl;
                cout << "3. Actualizar" << endl;
                cout << "4. Borrar" << endl;
                cin >> op5;
                cout << "\n";

                switch (op5) {
                case 1:
                    consulta5 = "select * from super_mercado.puestos";
                    ee = consulta5.c_str();
                    q_estado = mysql_query(conectar, ee);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese los nombres del Empleado: ";
                    cin >> nombresE;
                    cout << "Ingrese el apellido del Empleado: ";
                    cin >> apellidosE;
                    cout << "Ingrese la direccion: ";
                    cin >> direccionE;
                    cout << "Ingrese el telefono: ";
                    cin >> telefonoE;
                    cout << "Ingrese el dpi: ";
                    cin >> dpi;
                    cout << "Ingrese el genero: ";
                    cin >> generoE;
                    cout << "Ingrese la fecha de nacimiento: ";
                    cin >> fechaE;
                    cout << "Ingrese el id del puesto: ";
                    cin >> puestoE;
                    cout << "Ingrese la fecha de inicio de labores: ";
                    cin >> fechaE2;
                    cout << "Ingrese la fecha de ingreso: ";
                    cin >> fechaE3;
                    insert5 = "insert into empleados(nombres,apellidos,direccion,telefono,DPI,genero,fecha_nacimiento,idPuesto,fecha_inicio_labores,fechaingreso) values('" + nombresE + "','" + apellidosE + "','" + direccionE + "','" + telefonoE + "','" + dpi + "','" + generoE + "','" + fechaE + "','" + puestoE + "','" + fechaE2 + "','" + fechaE3 + "');";
                    e = insert5.c_str();
                    q_estado = mysql_query(conectar, e);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 2:
                    consulta5 = "select * from super_mercado.empleados";
                    ee = consulta5.c_str();
                    q_estado = mysql_query(conectar, ee);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << "," << fila[8] << "," << fila[9] << "," << fila[10] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    break;

                case 3:
                    consulta5 = "select * from super_mercado.puestos";
                    ee = consulta5.c_str();
                    q_estado = mysql_query(conectar, ee);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    consulta5 = "select * from super_mercado.empleados";
                    ee = consulta5.c_str();
                    q_estado = mysql_query(conectar, ee);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << "," << fila[8] << "," << fila[9] << "," << fila[10] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a modificar: ";
                    cin >> actualizar5;
                    cout << "Ingrese los nombres del cliente: ";
                    cin >> nombresE2;
                    cout << "Ingrese el apellido del cliente: ";
                    cin >> apellidosE2;
                    cout << "Ingrese la direccion: ";
                    cin >> direccionE2;
                    cout << "Ingrese el telefono: ";
                    cin >> telefonoE2;
                    cout << "Ingrese el dpi: ";
                    cin >> dpi2;
                    cout << "Ingrese el genero: ";
                    cin >> generoE2;
                    cout << "Ingrese la fecha de nacimiento: ";
                    cin >> fechaE4;
                    cout << "Ingrese el puesto: ";
                    cin >> puestoE2;
                    cout << "Ingrese la fecha de inicio de labores: ";
                    cin >> fechaE5;
                    cout << "Ingrese la fecha de ingreso: ";
                    cin >> fechaE6;
                    insert5 = "update empleados set nombres = '" + nombresE2 + "',apellidos = '" + apellidosE2 + "',direccion = '" + direccionE2 + "',telefono = '" + telefonoE2 + "',DPI = '" + dpi2 + "',genero = '" + generoE2 + "',fecha_nacimiento = '" + fechaE4 + "',idPuesto = '" + puestoE2 + "',fecha_inicio_labores = '" + fechaE5 + "',fechaingreso = '" + fechaE6 + "' where idEmpleado= " + actualizar5 + "";
                    ee = insert5.c_str();
                    q_estado = mysql_query(conectar, ee);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 4:
                    consulta5 = "select * from super_mercado.empleados";
                    ee = consulta5.c_str();
                    q_estado = mysql_query(conectar, ee);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << "," << fila[8] << "," << fila[9] << "," << fila[10] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a eliminar: ";
                    cin >> eliminar5;
                    insert5 = "delete from empleados where idEmpleado=" + eliminar5 + "";
                    e = insert5.c_str();
                    q_estado = mysql_query(conectar, e);
                    if (!q_estado) {
                        cout << "Registro eliminado" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                }
            }
                break;

            case 6:
            {
                int op6;
                string insert6, producto, producto2, marcaM, marcaM2, descripcion, descripcion2, imagen, imagen2, precio, precio2, precio3, precio4, existencia, existencia2, fechaPR, fechaPR2, consulta6, actualizar6, eliminar6;
                const char* f;
                const char* ff;
                cout << "1. crear" << endl;
                cout << "2. Leer" << endl;
                cout << "3. Actualizar" << endl;
                cout << "4. Borrar" << endl;
                cin >> op6;
                cout << "\n";

                switch (op6) {
                case 1:
                    consulta6 = "select * from marcas";
                    ff = consulta6.c_str();
                    q_estado = mysql_query(conectar, ff);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese los nombres del producto: ";
                    cin >> producto;
                    cout << "Ingrese el id de la marca: ";
                    cin >> marcaM;
                    cout << "Ingrese la direccion: ";
                    cin >> descripcion;
                    cout << "Ingrese la imagen: ";
                    cin >> imagen;
                    cout << "Ingrese el precio del costo: ";
                    cin >> precio;
                    cout << "Ingrese el precio de venta: ";
                    cin >> precio2;
                    cout << "Ingrese las existencias: ";
                    cin >> existencia;
                    cout << "Ingrese la fecha de ingreso: ";
                    cin >> fechaPR;
                    insert6 = "insert into productos(producto,idMarca,Descripcion,Imagen,precio_costo,precio_venta,existencia,fecha_ingreso) values('" + producto + "','" + marcaM + "','" + descripcion + "','" + imagen + "','" + precio + "','" + precio2 + "','" + existencia + "','" + fechaPR + "');";
                    f = insert6.c_str();
                    q_estado = mysql_query(conectar, ff);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 2:
                    consulta6 = "select * from super_mercado.productos";
                    ff = consulta6.c_str();
                    q_estado = mysql_query(conectar, ff);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << "," << fila[8] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    break;

                case 3:
                    consulta6 = "select * from marcas";
                    ff = consulta6.c_str();
                    q_estado = mysql_query(conectar, ff);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    consulta6 = "select * from super_mercado.productos";
                    ff = consulta6.c_str();
                    q_estado = mysql_query(conectar, ff);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << "," << fila[8] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a modificar: ";
                    cin >> actualizar6;
                    cout << "Ingrese los nombres del producto: ";
                    cin >> producto2;
                    cout << "Ingrese el id de la marca: ";
                    cin >> marcaM2;
                    cout << "Ingrese la direccion: ";
                    cin >> descripcion2;
                    cout << "Ingrese la imagen: ";
                    cin >> imagen2;
                    cout << "Ingrese el precio del costo: ";
                    cin >> precio3;
                    cout << "Ingrese el precio de venta: ";
                    cin >> precio4;
                    cout << "Ingrese las existencias: ";
                    cin >> existencia2;
                    cout << "Ingrese la fecha de ingreso: ";
                    cin >> fechaPR2;
                    insert6 = "update productos set producto = '" + producto2 + "',idMarca = '" + marcaM2 + "',descripccion = '" + descripcion2 + "',imagen = '" + imagen2 + "',precio_costo = '" + precio3 + "',precio_venta = '" + precio4 + "',existencia = '" + existencia2 + "',fecha_ingreso = '" + fechaPR2 + "' where idProducto= " + actualizar6 + "";
                    ff = insert6.c_str();
                    q_estado = mysql_query(conectar, ff);
                    if (!q_estado) {
                        cout << "Ingreso exitoso" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                case 4:
                    consulta6 = "select * from super_mercado.productos";
                    ff = consulta6.c_str();
                    q_estado = mysql_query(conectar, ff);
                    if (!q_estado) {
                        resultado = mysql_store_result(conectar);
                        while (fila = mysql_fetch_row(resultado)) {
                            cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << "," << fila[8] << endl;
                            cout << "\n";
                        }
                    }
                    else {
                        cout << "Error al consultar" << endl;
                        cout << "\n";
                    }
                    cout << "------------------------------------------------------------------------------" << endl;
                    cout << "Ingrese el id a eliminar: ";
                    cin >> eliminar6;
                    insert6 = "delete from productos where idProducto=" + eliminar6 + "";
                    f = insert6.c_str();
                    q_estado = mysql_query(conectar, f);
                    if (!q_estado) {
                        cout << "Registro eliminado" << endl;
                        cout << "\n";
                    }
                    else {
                        cout << "Error al ingresar" << endl;
                        cout << "\n";
                    }
                    break;

                }
            }
                break;

            case 7:
            {
                int op7;
                cout << "1. crear" << endl;
                cout << "2. Leer" << endl;
                cout << "3. Actualizar" << endl;
                cout << "4. Borrar" << endl;
                cin >> op7;
                cout << "\n";

                switch (op7) {
                case 1:

                    break;

                case 2:

                    break;

                case 3:

                    break;

                case 4:

                    break;

                }
            }
                break;

            case 8:
            {
                int op7;
                cout << "1. crear" << endl;
                cout << "2. Leer" << endl;
                cout << "3. Actualizar" << endl;
                cout << "4. Borrar" << endl;
                cin >> op7;
                cout << "\n";

                switch (op7) {
                case 1:

                    break;

                case 2:

                    break;

                case 3:

                    break;

                case 4:

                    break;

                }
            }
                break;

            }
        } while (op != 9);
    }
    else {
        cout << "Error al conectar" << endl;
    }
    system("pause");
    return 0;



}
