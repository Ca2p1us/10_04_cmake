# cmakeのサンプル

起動

```bash
docker compose build
docker compose up -d
```

cmakeの実行

```bash
docker compose exec myopencv cmake -S src/ -B build/
```

ビルド

```bash
docker compose exec myopencv cmake --build build/
```

makeでビルド

```bash
docker compose exec myopencv make -C build/
```

実行

```bash
docker compose exec myopencv build/my_main
```

停止

```bash
docker compose down
```
