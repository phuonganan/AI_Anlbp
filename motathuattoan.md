# Mô tả bài toán di chuyển 8 ô số trên bàn cờ

---

## Trạng thái đầu

---

Những con số trên bàn cờ ở vị trí ngẫu nhiên. Ví dụ:

| Column 1    | Column2    | Column3    |
|---------------- | --------------- | --------------- |
| 5    | 2    | 1    |
| 7    | 4    | 3    |
| 0    | 8    | 6    |

## Trạng thái cuối

---

Những con số nằm ở đúng vị trí. Ví dụ:

Mô tả bài toán di chuyển 8 ô số trên bàn cờ
Những con số trên bàn cờ ở vị trí ngẫu nhiên. Ví dụ:


| Column 1    | Column2    | Column3    |
|---------------- | --------------- | --------------- |
| 1    | 2    | 3    |
| 4    | 5    | 6    |
| 7    | 8    | 0    |

## Các phép di chuyển trạng thái

---

Ta có thể di chuyển từ trạng thái đầu sang trạng thái cuối bằng cách đổi chỗ từng ô kế bên với ô số **0**.

## Hàm Heuristic được sử dụng

---

Sử dụng hàm Best-First Search Heuristic h(n).
