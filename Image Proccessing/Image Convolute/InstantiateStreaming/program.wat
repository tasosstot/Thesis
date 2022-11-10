(module
 (table 0 anyfunc)
 (memory $0 1)
 (export "memory" (memory $0))
 (export "imageConvolute" (func $imageConvolute))
 (func $imageConvolute (; 0 ;) (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32) (param $4 i32) (param $5 i32) (param $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (local $13 i32)
  (local $14 i32)
  (local $15 i32)
  (local $16 i32)
  (local $17 f64)
  (local $18 i32)
  (local $19 i32)
  (local $20 i32)
  (local $21 i32)
  (local $22 i32)
  (local $23 i32)
  (local $24 f64)
  (local $25 f64)
  (local $26 f64)
  (local $27 f64)
  (local $28 i32)
  (local $29 i32)
  (local $30 i32)
  (block $label$0
   (br_if $label$0
    (i32.lt_s
     (get_local $3)
     (i32.const 1)
    )
   )
   (set_local $11
    (i32.add
     (get_local $0)
     (i32.shl
      (i32.add
       (tee_local $8
        (i32.div_s
         (get_local $5)
         (i32.const -2)
        )
       )
       (i32.mul
        (tee_local $7
         (i32.div_s
          (get_local $6)
          (i32.const -2)
         )
        )
        (get_local $2)
       )
      )
      (i32.const 2)
     )
    )
   )
   (set_local $10
    (i32.shl
     (get_local $2)
     (i32.const 2)
    )
   )
   (set_local $9
    (i32.shl
     (get_local $5)
     (i32.const 3)
    )
   )
   (set_local $15
    (i32.lt_s
     (get_local $2)
     (i32.const 1)
    )
   )
   (set_local $12
    (i32.const 0)
   )
   (loop $label$1
    (block $label$2
     (br_if $label$2
      (get_local $15)
     )
     (set_local $14
      (i32.mul
       (get_local $12)
       (get_local $2)
      )
     )
     (set_local $13
      (i32.add
       (get_local $12)
       (get_local $7)
      )
     )
     (set_local $20
      (i32.const 0)
     )
     (set_local $18
      (get_local $11)
     )
     (set_local $19
      (get_local $8)
     )
     (loop $label$3
      (set_local $24
       (f64.const 0)
      )
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i32.lt_s
          (get_local $6)
          (i32.const 1)
         )
        )
        (set_local $25
         (f64.const 0)
        )
        (set_local $26
         (f64.const 0)
        )
        (set_local $27
         (f64.const 0)
        )
        (br_if $label$4
         (i32.lt_s
          (get_local $5)
          (i32.const 1)
         )
        )
        (set_local $23
         (i32.const 0)
        )
        (set_local $27
         (f64.const 0)
        )
        (set_local $21
         (get_local $18)
        )
        (set_local $22
         (get_local $4)
        )
        (set_local $26
         (f64.const 0)
        )
        (set_local $25
         (f64.const 0)
        )
        (set_local $24
         (f64.const 0)
        )
        (loop $label$6
         (block $label$7
          (br_if $label$7
           (i32.lt_s
            (tee_local $16
             (i32.add
              (get_local $13)
              (get_local $23)
             )
            )
            (i32.const 0)
           )
          )
          (set_local $0
           (get_local $21)
          )
          (set_local $28
           (get_local $19)
          )
          (set_local $29
           (get_local $22)
          )
          (set_local $30
           (get_local $5)
          )
          (br_if $label$7
           (i32.ge_s
            (get_local $16)
            (get_local $3)
           )
          )
          (loop $label$8
           (block $label$9
            (br_if $label$9
             (i32.lt_s
              (get_local $28)
              (i32.const 0)
             )
            )
            (br_if $label$9
             (i32.ge_s
              (get_local $28)
              (get_local $2)
             )
            )
            (set_local $27
             (f64.add
              (get_local $27)
              (f64.mul
               (tee_local $17
                (f64.load
                 (get_local $29)
                )
               )
               (f64.convert_u/i32
                (i32.load8_u
                 (get_local $0)
                )
               )
              )
             )
            )
            (set_local $25
             (f64.add
              (get_local $25)
              (f64.mul
               (get_local $17)
               (f64.convert_u/i32
                (i32.load8_u
                 (i32.add
                  (get_local $0)
                  (i32.const 3)
                 )
                )
               )
              )
             )
            )
            (set_local $24
             (f64.add
              (get_local $24)
              (f64.mul
               (get_local $17)
               (f64.convert_u/i32
                (i32.load8_u
                 (i32.add
                  (get_local $0)
                  (i32.const 2)
                 )
                )
               )
              )
             )
            )
            (set_local $26
             (f64.add
              (get_local $26)
              (f64.mul
               (get_local $17)
               (f64.convert_u/i32
                (i32.load8_u
                 (i32.add
                  (get_local $0)
                  (i32.const 1)
                 )
                )
               )
              )
             )
            )
           )
           (set_local $0
            (i32.add
             (get_local $0)
             (i32.const 4)
            )
           )
           (set_local $28
            (i32.add
             (get_local $28)
             (i32.const 1)
            )
           )
           (set_local $29
            (i32.add
             (get_local $29)
             (i32.const 8)
            )
           )
           (br_if $label$8
            (tee_local $30
             (i32.add
              (get_local $30)
              (i32.const -1)
             )
            )
           )
          )
         )
         (set_local $21
          (i32.add
           (get_local $21)
           (get_local $10)
          )
         )
         (set_local $22
          (i32.add
           (get_local $22)
           (get_local $9)
          )
         )
         (br_if $label$6
          (i32.ne
           (tee_local $23
            (i32.add
             (get_local $23)
             (i32.const 1)
            )
           )
           (get_local $6)
          )
         )
         (br $label$4)
        )
       )
       (set_local $25
        (f64.const 0)
       )
       (set_local $26
        (f64.const 0)
       )
       (set_local $27
        (f64.const 0)
       )
      )
      (i32.store8
       (i32.add
        (get_local $1)
        (tee_local $0
         (i32.shl
          (i32.add
           (get_local $20)
           (get_local $14)
          )
          (i32.const 2)
         )
        )
       )
       (i32.trunc_u/f64
        (get_local $27)
       )
      )
      (i32.store8
       (i32.add
        (get_local $1)
        (i32.or
         (get_local $0)
         (i32.const 1)
        )
       )
       (i32.trunc_u/f64
        (get_local $26)
       )
      )
      (i32.store8
       (i32.add
        (get_local $1)
        (i32.or
         (get_local $0)
         (i32.const 2)
        )
       )
       (i32.trunc_u/f64
        (get_local $24)
       )
      )
      (i32.store8
       (i32.add
        (get_local $1)
        (i32.or
         (get_local $0)
         (i32.const 3)
        )
       )
       (i32.trunc_u/f64
        (get_local $25)
       )
      )
      (set_local $18
       (i32.add
        (get_local $18)
        (i32.const 4)
       )
      )
      (set_local $19
       (i32.add
        (get_local $19)
        (i32.const 1)
       )
      )
      (br_if $label$3
       (i32.ne
        (tee_local $20
         (i32.add
          (get_local $20)
          (i32.const 1)
         )
        )
        (get_local $2)
       )
      )
     )
    )
    (set_local $11
     (i32.add
      (get_local $11)
      (get_local $10)
     )
    )
    (br_if $label$1
     (i32.ne
      (tee_local $12
       (i32.add
        (get_local $12)
        (i32.const 1)
       )
      )
      (get_local $3)
     )
    )
   )
  )
 )
)
