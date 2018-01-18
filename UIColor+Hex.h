//
//  UIColor+Hex.h
//
//  Created by Max on 7/21/17.
//  Copyright © 2017 Max. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)

- (NSString *)hexString ;
+ (UIColor *)colorFromHexString:(NSString *)hexString;
@end
