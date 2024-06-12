import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class CharScanner {
    public static void main(String[] args) {
        String fileName = "input.js"; // Файл з JavaScript кодом
        StringBuilder content = new StringBuilder();

        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            int c;
            while ((c = br.read()) != -1) {
                char character = (char) c;
                content.append(character);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Записуємо текст у новий файл для аналізу JavaScript
        try (FileWriter fileWriter = new FileWriter("scanned_output.txt")) {
            fileWriter.write(content.toString());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
