#include <iostream>
#include <string>

using namespace std;

void showMenu() {
    char keyPress;
    bool exit = false;
    
    while (!exit) {
        cout << "*****************************************************************************************" << endl;
        cout << "* .___________. __    __   _______      _______      ___      .___  ___.  _______  *" << endl;
        cout << "* |           ||  |  |  | |   ____|    /  _____|    /   \\     |    V   | |   ____| *" << endl;
        cout << "* `---|  |----`|  |__|  | |  |__      |  |  __     /  ^  \\    | \\   /  | |  |__    *" << endl;
        cout << "*     |  |     |   __   | |   __|     |  | |_ |   /  /_|  \\   |  \\ V|  | |   __|   *" << endl;
        cout << "*     |  |     |  |  |  | |  |____    |  |__| |  /  _____  \\  |  |  |  | |  |____  *" << endl;
        cout << "*     |__|     |__|  |__| |_______|    \\______| /__/     \\_ \\ |__|  |__| |_______| *" << endl;     
        cout << "*	                                                                                  *" << endl;
        cout << "******************************************************************************************" << endl;
        cout << "*                                        ,                                               *" << endl;
        cout << "*                                     ,  ;:._.-`''.                                      *" << endl;
        cout << "*                                   ;.;'.;`      _ `.                                    *" << endl;
        cout << "*                                    ',;`       ( | ,`-.                                 *" << endl;
        cout << "*                                 `:.`,         (_/ ; | `-.                              *" << endl;
        cout << "*                                  ';:              / `.   `-._                          *" << endl;
        cout << "*                                `;.;'              `-,/ .     `-.                       *" << endl;
        cout << "*                                ';;'              _    `^`       `.                     *" << endl;
        cout << "*                               ';;            ,'-' `--._          ;                     *" << endl;
        cout << "*                      ':      `;;        ,;     `.    ':`,,.__,,_ /                     *" << endl;
        cout << "*                       `;`:;`;:`       ,;  '.    ;,      ';';':';;                      *" << endl;
        cout << "*                                    .,; '    '-._ `':.;                                 *" << endl;
        cout << "*                                  .:; `          '._ `';;,                              *" << endl;
        cout << "*                                ;:` `    :'`'       ',__.)                              *" << endl;
        cout << "*                              `;:;:.,...;'`'                                            *" << endl;
        cout << "*                            ';. '`'::'`''  .'`'                                         *" << endl;
        cout << "*                          ,'jgs`';;:,..::;`'`'                                          *"<< endl;
        cout << "*                      , .;`      `'::''`                                                *"<< endl;
        cout << "*                      ,`;`.                                                             *"<< endl;
        cout << "* __         _____ _______       _____ _______   * ___        ________   _______ _______ *"<< endl;
        cout << "*/_ |       / ____|__   __|/\\   |  __ |__   __| * |__ |      |  ____| | / /_   _|__   __|*"<< endl;
        cout << "* | |____  | (___    | |  /  \\  | |__) | | |    *    ) |___  | |__   | V /  | |    | |   *"<< endl;
        cout << "* | |____|  |___ |   | | / /| \\ |  _  /  | |    *   / /____| |  __|   > <   | |    | |   *"<< endl;
        cout << "* | |_      ____) |  | |/ ____ \\| | | \\ | |     *  / /_ _    | |____ / . | _| |_   | |   *"<< endl;
        cout << "* |_(_)    |_____/   |_/_/    |_\\_|  |_\\|_|     * |____(_)   |______/_/ |_|_____|  |_|   *"<< endl;
        cout << "***********************************************************************************" << endl;
        
        cout << "\nPresiona '1' para iniciar el juego, '2' para salir." << endl;
        cin >> keyPress;  // Captura la tecla presionada
        
        switch (keyPress) {
            case '1':
                cout << "\nIniciando juego...\n";
                // Aquí puedes añadir código para iniciar el juego realmente
                system("pause");  // Pausa la consola para que el mensaje sea visible
                break;
            case '2':
                cout << "\nSaliendo del juego...\n";
                exit = true;
                break;
            default:
                cout << "\nOpción no válida. Inténtalo de nuevo.\n";
                system("pause");  // Pausa la consola para que el mensaje sea visible
        }
    }
}

int main() {
    showMenu();
    return 0;
}
