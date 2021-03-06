//
//  ZYWMacdModel.h
//  ZYWChart
//
//  Created by 张有为 on 2017/3/13.
//  Copyright © 2017年 zyw113. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZYWMacdModel : NSObject

@property(assign, nonatomic) CGFloat dea;
@property(assign, nonatomic) CGFloat diff;
@property(assign, nonatomic) CGFloat macd;
@property(copy,   nonatomic) NSString *date;

- (id)initWithDea:(CGFloat)dea diff:(CGFloat)diff macd:(CGFloat)macd date:(NSString *)date;

@end
