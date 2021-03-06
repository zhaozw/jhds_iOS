//
//  DMBrushModel.h
//  DrawMaster
//
//  Created by git on 16/7/1.
//  Copyright © 2016年 QuanGe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DMBrushModel : NSObject
@property (nonatomic,readwrite,strong) UIBezierPath *brushPath;
@property (nonatomic,readwrite,strong) CAShapeLayer *shape;
@property (nonatomic,readwrite,strong) UIColor *brushColor;
@property (nonatomic,readwrite,assign) CGFloat brushWidth;
@property (nonatomic,readwrite,strong) NSMutableArray *brushLines;
- (instancetype)initWithBrushWidth:(CGFloat)bw BrushColor:(UIColor *)bc;
@end
