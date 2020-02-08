//获取随机数

    func getRandom(){

        //1:下面是使用arc4random函数求一个1~100的随机数（包括1和100）

        let randomNumber:Int = Int(arc4random() % 100) + 1

        

        print(randomNumber)



        //func arc4random_uniform(_: UInt32) -> UInt32.接受一个 UInt32 的数字 n 作为输入，将结果归一化到 0 到 n - 1 之间。只要我们的输入不超过 Int 的范围，就可以避免危险的转换：

        let randomNumberTwo:Int = Int(arc4random_uniform(100))+1

        print(randomNumberTwo)

        // 如果想指定区间的最小值（如随机数区间在[5, 100)

        // let max: UInt32 = 100

        // let min: UInt32 = 5

        // arc4random_uniform(max - min) + min

