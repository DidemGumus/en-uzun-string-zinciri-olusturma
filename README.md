# EN UZUN STRİNG ZİNCİRİ OLUŞTURMA

# KODUN AMACI NEDİR ? 
Bu C programı, bir kelime dizisi içindeki en uzun zinciri bulmayı amaçlar.
Program, öncelikle kelime dizisindeki kelimeleri uzunluklarına göre sıralar.
Ardından, her bir kelime için bir zincir uzunluğu hesaplar.
Zincir uzunluğu, önceki kelimeyi bir öncül olarak içeren ve şimdiki kelimeyi sona ekleyen en uzun kelime dizisi olarak tanımlanır. 
Program, kullanıcının belirlediği bir kelime dizisi üzerinde çalışır.
Bu örnekte, "a", "ab", "abc", "abcd", "abcde", "abcdef" kelimeleri verilmiştir. 
Kullanıcı, bu kelime dizisini değiştirerek programı çalıştırabilir. 

# KOD NASIL ÇALIŞIR ? 
 İlk olarak, kelime dizisi uzunluklarına göre sıralanır.
 Daha sonra, her bir kelime için bir zincir uzunluğu hesaplanır.
 Zincir uzunluğu hesaplanırken, önceki kelimeyi bir öncül olarak içeren ve şimdiki kelimeyi sona ekleyen en uzun kelime dizisi bulunur.
 Eğer bir önceki kelime, şimdiki kelimenin bir öncülü ise zincir uzunluğu bir arttırılır. 
 En sonunda, en uzun zincir uzunluğu bulunarak ekrana yazdırılır. 

# KOD NASIL KULLANILIR ? 
Programın kullanımı için, kullanıcı öncelikle kodu bir C derleyicisi ile derleyerek çalıştırmalıdır.
Programın çalışması için kelime dizisini değiştirmek istiyorsa, "char* kelimeler[]" satırındaki kelime dizisini değiştirebilir.
Son olarak, programı çalıştırmak için kullanıcı, derlenmiş programın dosya yolunu terminale yazarak ENTER tuşuna basmalıdır.
Programın sonucu ekranda görüntülenecektir. 
 
 
