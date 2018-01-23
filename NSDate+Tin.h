//
//  NSDate+Tin.h
//  Skipper
//
//  Created by Admin on 1/27/16.
//  Copyright © 2016 Harry. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Tin)

- (NSDate *)getPreviousMonthStartDate;
- (NSDate *)getPreviousMonthEndDate;
- (NSDate *)getCurrentMonthStartDate;
- (NSDate *)getCurrentYearStartDate;

@end
