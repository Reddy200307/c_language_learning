#include <gtk/gtk.h>

// Callback function when button is clicked
static void on_button_clicked(GtkWidget *widget, gpointer data) {
    g_print("Hello, GTK in C!\n");
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *button;

    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create a new window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "C GUI Demo");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    // Connect the "destroy" signal to quit GTK
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a button with a label
    button = gtk_button_new_with_label("Click Me!");

    // Connect button click to callback
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);

    // Add button to the window
    gtk_container_add(GTK_CONTAINER(window), button);

    // Show everything
    gtk_widget_show_all(window);

    // Run GTK main loop
    gtk_main();

    return 0;
}
