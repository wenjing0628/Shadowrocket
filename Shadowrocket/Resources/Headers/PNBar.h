//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CATextLayer, UIColor;

@interface PNBar : UIView
{
    _Bool _isNegative;
    _Bool _isShowNumber;
    _Bool _displayAnimated;
    float _grade;
    float _maxDivisor;
    float _copyGrade;
    CAShapeLayer *_chartLine;
    UIColor *_barColor;
    UIColor *_barColorGradientStart;
    double _barRadius;
    CAShapeLayer *_gradientMask;
    CAShapeLayer *_gradeLayer;
    CATextLayer *_textLayer;
    UIColor *_labelTextColor;
}

@property(nonatomic) float copyGrade; // @synthesize copyGrade=_copyGrade;
@property(nonatomic) _Bool displayAnimated; // @synthesize displayAnimated=_displayAnimated;
@property(nonatomic) _Bool isShowNumber; // @synthesize isShowNumber=_isShowNumber;
@property(nonatomic) _Bool isNegative; // @synthesize isNegative=_isNegative;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) CAShapeLayer *gradeLayer; // @synthesize gradeLayer=_gradeLayer;
@property(retain, nonatomic) CAShapeLayer *gradientMask; // @synthesize gradientMask=_gradientMask;
@property(nonatomic) double barRadius; // @synthesize barRadius=_barRadius;
@property(retain, nonatomic) UIColor *barColorGradientStart; // @synthesize barColorGradientStart=_barColorGradientStart;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(retain, nonatomic) CAShapeLayer *chartLine; // @synthesize chartLine=_chartLine;
@property(nonatomic) float maxDivisor; // @synthesize maxDivisor=_maxDivisor;
@property(nonatomic) float grade; // @synthesize grade=_grade;
- (void).cxx_destruct;
- (void)addRotationAnimationIfNeeded;
- (void)addAnimationIfNeededWithProgressLine:(id)arg1;
- (id)fadeAnimation;
- (void)setGradeFrame:(double)arg1 startPosY:(double)arg2;
- (struct CGPath *)gradePath:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)rollBack;
- (id)initWithFrame:(struct CGRect)arg1;

@end

