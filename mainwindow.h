#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"famille.h"
#include <QMainWindow>
#include "map.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_adherant_clicked();

    void on_famille_clicked();

    void on_finance_clicked();

    void on_logistique_clicked();

    void on_physiques_clicked();

    void on_retour_adherant_clicked();

    void on_retour_adherant_3_clicked();

    void on_retour_famille_clicked();

    void on_retour_finance_clicked();

    void on_retour_logistique_clicked();

    void on_retour_physique_clicked();

    void on_pushButton_clicked();


    void on_adherant_4_clicked();

    void on_adherant_5_clicked();

    void on_retour_adherant_2_clicked();

    void onactionOpenTriggered();

    void on_b_ajouter_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_afficherfamille_clicked();

    void on_tabfam_activated(const QModelIndex &index);

    void on_pb_modifier_clicked();

    void on_pushButton_42_clicked();

    void on_tableView_famille_activated(const QModelIndex &index);



    void on_pbr_clicked();

    void on_pushButton_37_clicked();

    void on_onactionOpenTriggered_clicked();

    void on_rech_cursorPositionChanged(int arg1, int arg2);

    void on_rech_textChanged(const QString &arg1);

    void on_map_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_40_clicked();

    void on_cin_clicked();

private:
    Ui::MainWindow *ui;
    famille f ;
    map *m;
    famille tempf;
};
#endif // MAINWINDOW_H
