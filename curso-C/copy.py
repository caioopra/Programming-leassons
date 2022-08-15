import os

if __name__ == "__main__":
	file_created = False

	while not file_created:
		input_file = input("Nome do arquivo: ")

		if not os.path.exists(input_file):
			os.system(f"cp base.c {input_file}")
			print("Arquivo criado!")
			file_created = True

			os.system(f"nano {input_file}")
		else:
			print(f"Arquivo {input_file} ja existente")
