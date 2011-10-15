/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class UILabel;

@interface IUNowPlayingNavigationButton : UIButton
{
    UILabel *_labelView;
}

+ (BOOL)_textDrawnAsLabel;
+ (id)_localizedTextLabel;
+ (float)_localizedTextFontSize;
+ (id)_localizedPressedImage;
+ (id)_localizedImage;
- (void)sizeToFit;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)hitRect;
- (id)init;

@end
