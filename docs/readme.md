# RPG Console Game

## Konsep Dasar

* Game langsung dimulai tanpa menu utama .
* Fokus pada gameplay loop terlebih dahulu.
* Menu game dibuat belakangan karena bukan prioritas untuk game console sederhana.

---

# Gameplay Loop

```text
Start Game
    ↓
Explore
    ↓
Random Event
    ↓
(Hasil Event)
    ↓
Kembali ke Explore
```

---

# Explore

Saat player memilih Explore, salah satu event berikut terjadi secara acak:

## Enemy Encounter

Player bertemu musuh.

### Battle Flow

```text
Enemy Appears
    ↓
Battle
    ↓
Win / Lose
    v
win lose



```

#### Jika Menang

* Mendapat Gold
* Mendapat EXP
* Kemungkinan mendapatkan Item

#### Jika Kalah

* Game Over

---

## Gold Discovery

Player menemukan sejumlah Gold.

Reward:

* * Gold

Lalu kembali ke Explore.

---

## Rest Area

Player menemukan tempat istirahat.

Reward:

* HP dipulihkan

Lalu kembali ke Explore.

---

# Player Stats

Data minimum yang dimiliki player:

* HP
* Max HP
* Attack
* Defense
* Gold
* EXP
* Level

---

# Shop

Fitur Shop dapat ditambahkan setelah gameplay dasar selesai.

Item yang dapat dibeli:

* Potion
* Weapon
* Armor

Menggunakan Gold yang diperoleh dari Explore dan Battle.

---

# Menu 

Menu dibuat setelah fitur utama selesai.

```text
==== RPG GAME ====

1. Explore
2. Shop
3. Player Stats
4. Exit
```


---
# logic dungeon

```text


```



