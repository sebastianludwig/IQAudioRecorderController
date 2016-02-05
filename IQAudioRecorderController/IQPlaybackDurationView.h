//
//  IQPlaybackDurationView.h
//  IQAudioRecorderController Demo
//
//  Created by Sebastian Ludwig on 03.02.16.
//  Copyright © 2016 Iftekhar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IQPlaybackDurationView;

@protocol IQPlaybackDurationViewDelegate <NSObject>

- (void)playbackDurationView:(IQPlaybackDurationView *)playbackView didStartScrubbingAtTime:(NSTimeInterval)time;
- (void)playbackDurationView:(IQPlaybackDurationView *)playbackView didScrubToTime:(NSTimeInterval)time;
- (void)playbackDurationView:(IQPlaybackDurationView *)playbackView didEndScrubbingAtTime:(NSTimeInterval)time;

@end

@interface IQPlaybackDurationView : UIView

@property (weak) id<IQPlaybackDurationViewDelegate> delegate;
@property (nonatomic, getter=isShowingRemainingTime) IBInspectable BOOL showRemainingTime;
@property (nonatomic) IBInspectable UIColor *textColor;
@property (nonatomic) IBInspectable UIColor *sliderTintColor;

- (void)setDuration:(NSTimeInterval)duration;
- (void)setCurrentTime:(NSTimeInterval)time;
- (void)setCurrentTime:(NSTimeInterval)time animated:(BOOL)animated;

@end
