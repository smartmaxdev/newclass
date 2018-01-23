//
//  NSDate+Tin.m
//  Skipper
//
//  Created by Admin on 1/27/16.
//  Copyright © 2016 Harry. All rights reserved.
//

#import "NSDate+Tin.h"

@implementation NSDate (Tin)

- (NSDate *)getPreviousMonthStartDate {
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *comps = [NSDateComponents new];
    comps.month = -1;
    NSDate *date = [calendar dateByAddingComponents:comps toDate:[NSDate date] options:0];
    NSDate *startDate = [date getCurrentMonthStartDate];
    
    NSDateFormatter *dateFormat = [[NSDateFormatter alloc] init];
    [dateFormat setDateStyle:NSDateFormatterMediumStyle];
    NSLog(@"Get previous month start %@", [dateFormat stringFromDate:startDate]);
    
    return startDate;
}

- (NSDate *)getPreviousMonthEndDate {
    NSDate *startDate = [self getCurrentMonthStartDate];
    
    NSDateFormatter *dateFormat = [[NSDateFormatter alloc] init];
    [dateFormat setDateStyle:NSDateFormatterMediumStyle];
    NSLog(@"Get previous month end %@", [dateFormat stringFromDate:[NSDate dateWithTimeInterval:-1 sinceDate:startDate]]);
    
    
    return [NSDate dateWithTimeInterval:-1 sinceDate:startDate];
}

- (NSDate *)getCurrentMonthStartDate {
    NSCalendar *gregorian = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
    NSDateComponents *comp = [gregorian components:(NSYearCalendarUnit | NSMonthCalendarUnit | NSDayCalendarUnit) fromDate:self];
    [comp setDay:1];
    NSDate *firstDayOfMonthDate = [gregorian dateFromComponents:comp];
    
    NSDateFormatter *dateFormat = [[NSDateFormatter alloc] init];
    [dateFormat setDateStyle:NSDateFormatterMediumStyle];
    NSLog(@"%@", [dateFormat stringFromDate:firstDayOfMonthDate]);
    
    return firstDayOfMonthDate;
}

- (NSDate *)getCurrentYearStartDate {
    NSDateComponents *components = [[NSCalendar currentCalendar] components:NSCalendarUnitDay | NSCalendarUnitMonth | NSCalendarUnitYear fromDate:[NSDate date]];
    NSDate *result = [self returnDateForMonth:1 year:components.year day:1];
    
    NSDateFormatter *dateFormat = [[NSDateFormatter alloc] init];
    [dateFormat setDateStyle:NSDateFormatterMediumStyle];
    NSLog(@"getCurrentYearStartDate %@", [dateFormat stringFromDate:result]);
    
    return result;
}

- (NSDate *)returnDateForMonth:(NSInteger)month year:(NSInteger)year day:(NSInteger)day {
    NSDateComponents *components = [[NSDateComponents alloc] init];
    
    [components setDay:day];
    [components setMonth:month];
    [components setYear:year];
    
    NSCalendar *gregorian = [[NSCalendar alloc]
                             initWithCalendarIdentifier:NSGregorianCalendar];
    return [gregorian dateFromComponents:components];
}

@end
