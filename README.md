# NHK2024_R1CANIDList
R1のCANIDをリストアップするリポジトリ
R1CANIDList.hをインクルードして使ってください

## 注意
ここを書き換えたらラズパイ側のCANIDリストの変更もお願いします. 
https://github.com/T-semi-Tohoku-Uni/NHK2024_R1_Raspi/blob/main/src/can_list.py

## 送るビットたち
### `0x101`
射出機構の上下をする.  \
`CANID_BALL_EJECTOR_CONTROLE`
- 0 : 下
- 1 : 上

### `0x102`
射出機構のボールアームの開閉. \
`CANID_BALL_HAND_OPEN`
- 0 : 閉じる（ボールキャッチ）（初期状態）
- 1 : 開く

### `0x103`
射出機構のボールハンドを床につける. \
`CANID_BALL_HAND_UNEXPAND`
- 0 : ハンドを下に押し当てる（ハンドの展開）
- 1 : ハンドを格納する （初期状態）

### `0x104`
苗アームの上下. \
`CANID_SEEDLING_ARM_ELEVATOR_DOWN`
- 0 : 苗アームを上に上げる（初期状態）
- 1 : 苗アームを下に下げる


### `0x105`
内側のアームの開閉 \
`CANID_SEEDLING_INSIDE_HAND_OPEN`
- 0 : 内側の二つの苗アームを閉じる (初期状態)
- 1 : 内側の二つの苗アームを開く

### `0x106`
外側のアームの開閉 \
`CANID_SEEDLING_OUTSIDE_HAND_OPEN`
- 0 : 内側の二つの苗アームを閉じる（初期状態）
- 1 : 内側の二つの苗アームを開く

### `0x108`
苗アームの位置調節
`CANID_SEEDLING_SET_ARM_POSITION`
- 0 : PICKUP
- 1 : 外側の二つをおく
- 2 : 内側の二つをおく

### `0x109`
苗アームの格納. \
`CAIND_SEEDLING_ARM_EXPAND`
- 0 : 苗アームを格納（初期状態）
- 1 : 苗アームを展開


### `0x10A`
射出用のローラを回転. \
`CANID_BALL_MOTOR_ON`
- 0 : ボール射出用のモータOFF（初期状態）
- 1 : モータON

### `0x10B`
足回りの通信. \
`CANID_ROBOT_VEL` \
`[v_x, v_y, omega]`.それぞれ0から254の値を入れる（127が速度0）