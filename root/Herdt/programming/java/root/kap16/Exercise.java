package com.herdt.java15.kap16;

import java.io.*;
import java.nio.*;
import java.nio.channels.*;
import java.nio.file.*;
import static java.nio.file.StandardOpenOption.*;

class Exercise
{
	public static void main(String[] args){

		Path file = Paths.get("C:\\java15\\uebungen\\kap16\\Alphabet.txt");

  	String s = "Das umgekehrte Alphabet - ";
		byte data[] = s.getBytes();

		byte zeichen[] = new byte[26];
		int j;

		ByteBuffer insert = ByteBuffer.wrap(data);

		ByteBuffer move = ByteBuffer.allocate(26);

		try (FileChannel fc = (FileChannel.open(file, READ, WRITE))) {
				int nread;
				do {
						nread = fc.read(move);
				} while (nread != -1 && move.hasRemaining());


				fc.position(0);
				while (insert.hasRemaining())
						fc.write(insert);
				insert.rewind();

				long length = fc.size();
		    fc.position(length);

				move.flip();

				j = nread-1;
				for (int i=0; i<nread; i++) {
				 	zeichen[j] = move.get(i);
				 	j--;
        }

				move  = ByteBuffer.wrap(zeichen);

				while (move.hasRemaining())
						fc.write(move);

		} catch (IOException x) {
				System.out.println("I/O Exception: " + x);
		}

	}
}