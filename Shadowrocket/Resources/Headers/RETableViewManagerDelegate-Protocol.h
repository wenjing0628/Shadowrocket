//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, UITableView, UITableViewCell;

@protocol RETableViewManagerDelegate <UITableViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 didLoadCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 willLoadCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 willLayoutCellSubviews:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
@end
