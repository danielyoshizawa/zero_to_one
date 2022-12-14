#!/bin/bash

usage() {
  echo "Usage: $0 [-c <001|999>]" 1>&2; exit 1;
}

while getopts "hc:" OPT; do
  case "$OPT" in
    c)
      c=${OPTARG}
      ;;
    h | *)
      usage
      ;;
  esac
done

if [ -z "${c}" ]; then
  usage
fi

echo "Creating class ${c}"

HOME="${PWD}/../"
CLASS_DIR="${HOME}/classes/${c}/"
PROJECT_DIR="${CLASS_DIR}/projects/"
CPP_DIR="${PROJECT_DIR}/c++"
PYTHON_DIR="${PROJECT_DIR}/python"

mkdir -p $CPP_DIR
mkdir -p $PYTHON_DIR

if [[ ! -e "${CLASS_DIR}/README.md" ]]; then
    touch "${CLASS_DIR}/README.md"
fi

if [[ ! -e "${CPP_DIR}/README.md" ]]; then
    touch "${CPP_DIR}/README.md"
fi

if [[ ! -e "${PYTHON_DIR}/README.md" ]]; then
    touch "${PYTHON_DIR}/README.md"
fi

echo "Class ${c} structure created"
