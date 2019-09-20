find . -name "*.sh" | sed 's:.*/::' | sed -e 's/\.sh$//'
