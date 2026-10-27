module com.herdt.kap09modA {
	// read-Abhängigkeit von kap09modA zu kap09modB
	requires com.herdt.kap09modB;
	// ist implizit in allen Modulen vorhanden, kann deshalb auch weggelassen werden
	requires java.base;
}