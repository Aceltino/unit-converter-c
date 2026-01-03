<div align="center">

# 🔢 Unit Converter in C

**Modular · Extensible · Dockerized · Engineering-Oriented**

</div>

---

## ✨ Overview

A **unit converter written in C**, designed with **modular architecture and software engineering best practices**.

This project aims to:
- Simulate real-world, professional project organization
- Encourage clean, maintainable, and extensible code
- Serve as a collaborative open-source learning project

---

## 🧩 Features

Supported physical quantities:

- 📏 **Length**
- ⚖️ **Mass**
- 🌡️ **Temperature**
- ⏱️ **Time**
- 🧪 **Volume**

📟 Interaction is performed through a **terminal-based menu system**.

---

## 🧱 Project Architecture

```
src/
├── main.c            # Entry point
├── menus.c/.h        # Menu interface
├── modulos/          # Business logic
│   ├── espaco.c
│   ├── massa.c
│   ├── temperatura.c
│   ├── tempo.c
│   ├── volume.c
│   └── headers/
│       └── *.h
├── shared/           # Reusable components
│   ├── conversao.c
│   ├── estilo.c
│   ├── utils.c
│   └── headers/
│       └── *.h
Build-generated directories:

obj/ → object files

bin/ → final binary

⚙️ Build & Run (Local)
Build
make
Run
make run
Clean
make clean
🐳 Running with Docker
⚠️ This is an interactive program
Always run the container using -it

docker build -t conversor-c .
docker run --rm -it conversor-c
🛠️ Tech Stack
C

GCC

Makefile

Docker (multi-stage build)

Linux

🤝 Contributing
Contributions are highly welcome 🚀
This repository was intentionally structured to make adding new conversion modules easy and safe.

🌱 Git Contribution Workflow
1️⃣ Fork & Clone
git clone https://github.com/your-username/conversor-c.git
cd conversor-c
2️⃣ Branch Strategy
Always branch from main.

Naming convention:

feature/module-name
fix/short-description
refactor/short-description
Examples:

git checkout -b feature/energy
git checkout -b fix/menu-input-validation
❌ Never commit directly to main.

3️⃣ Commits
Use clear, concise, and technical messages:

Add energy conversion module
Fix input validation loop
Refactor shared utility functions
➕ Adding a New Conversion Module
Step-by-step:

Create a new module in src/modulos/

Add the corresponding header in src/modulos/headers/

Implement conversion logic

Integrate it into menus.c

Update the Makefile

Build and test:

make clean && make && make run
📐 Best Practices
- Clean and readable code
- Small, well-defined functions
- Organized headers
- Proper input validation
- Zero compiler warnings

🔁 Pull Requests
When opening a PR:

Clearly describe what was changed

Explain why the change was made

Keep PRs small and focused

🚀 Roadmap
- Codebase standardization:
  - Rename folders, files, and identifiers from Portuguese to English
  - Unify naming conventions across the entire project
  - Improve consistency for international contributors
- Additional physical quantities
- Improved input validation
- Better separation between UI and business logic
- Automated tests
- Internationalization (PT / EN)


