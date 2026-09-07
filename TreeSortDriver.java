import java.util.Scanner;

public class TreeSortDriver {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        TreeSort tree = new TreeSort();
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            tree.insert(sc.nextInt());
        }
        tree.inorder(tree.root);
        sc.close();
    }
}