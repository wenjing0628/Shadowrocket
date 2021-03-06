//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLWViewController.h"

#import "UIDocumentInteractionControllerDelegate-Protocol.h"

@class NSFileHandle, NSString, UIDocumentInteractionController, UITextView;

@interface DLWDebugLogViewController : DLWViewController <UIDocumentInteractionControllerDelegate>
{
    NSString *_file;
    UITextView *_textView;
    NSFileHandle *_logFileHandler;
    UIDocumentInteractionController *_documentInteractionController;
}

@property(retain, nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
@property(retain, nonatomic) NSFileHandle *logFileHandler; // @synthesize logFileHandler=_logFileHandler;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (void)exportTask;
- (void)sendTruncateTask;
- (void)moreButtonTouched:(id)arg1;
- (void)setupMoreButton;
- (void)setupLogFileHandler;
- (void)scrollToBottomOfTextView;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

