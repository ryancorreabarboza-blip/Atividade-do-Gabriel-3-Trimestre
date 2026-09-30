fun main() {
  print("Produto: ")
  val produto = readln()
  print("Preço unitário (ex.: 12.50): ")
  val preco = readln().toDouble()
  print("Quantidade: ")
  val quantidade = readln().toInt()

  if (preco < 0 || qquantidade <= 0) {
      println("Preço ou quantidade inválidos.")
      return
  }

  val total = preco * qauntidade
  println("Produto: $produto")
  println("Quantidade: $qauntidade")
  println("Total: R$ %.2f".format(total))
}
