//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (Additions)
- (_Bool)isForceTouchAvailable;
- (void)dlw_presentConfirmationWithCancelHandler:(CDUnknownBlockType)arg1 deleteHandler:(CDUnknownBlockType)arg2;
- (void)dlw_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dlw_showViewController:(id)arg1 sender:(id)arg2;
- (void)dlw_setupNavigationBar;
- (void)dlw_qrCodeScaned:(id)arg1;
- (void)dlw_qrButtonTouched;
- (void)dlw_backButtonTouched;
- (void)dlw_closeButtonTouched;
- (void)dlw_addButtonTouched;
- (void)dlw_setupQRButtonWithCompletion:(CDUnknownBlockType)arg1;
- (void)dlw_setupAddButtonWithCompletion:(CDUnknownBlockType)arg1;
- (void)dlw_setupCloseButton;
- (void)dlw_setupBackButton;
@end

