
typedef struct player1 {
}player;

void printPlayerList(player *list);
player* addNewPlayer(player *list,char *ip_addr, int port, char *name);
void setPlayerName(player *list, char *ip_addr, int port, char *name, int number);
int countPlayer(player *list);
char* playerInfo(player* list, int index);
player* playerDisconnect(player *list, int serial);