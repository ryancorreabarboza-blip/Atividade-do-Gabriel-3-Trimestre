fun main() {
  print("Produto: ")
  val produto = readln()
  print("Preço unitário (ex.: 12.50): ")
  val preco = readln().toDouble()
  print("Quantidade: ")
  val quantidade = readln().toInt()

  if (preco < 0 
