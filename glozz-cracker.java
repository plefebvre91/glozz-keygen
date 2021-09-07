class GlozzKeygen {
  public static void main(String[] args) {
  	if(args.length < 1) {
  	    System.err.println("Usage: glozz-cracker <login>");
  	    System.exit(1);
  	}

    String login = args[0];
    String password = generate(login);
    System.out.println(password);
  }

  public static String generate(String login) {
    long l = 4567L;
      for (int i = 0; i < login.length(); ++i)
        l *= (long)login.charAt(i);
    return "" + (Math.abs(l) % 94929L);
  }
}
