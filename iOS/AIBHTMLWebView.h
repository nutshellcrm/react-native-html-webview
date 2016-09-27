//
//  AIBHTMLWebView.h
//  AIBHTMLWebView
//
//  Created by Thomas Parslow on 05/04/2015.
//  Copyright (c) 2015 Thomas Parslow. MIT License.
//

#import "RCTView.h"

@class RCTEventDispatcher;

@interface AIBHTMLWebView : RCTView

@property (nonatomic, strong) NSString *HTML;
@property (nonatomic, copy) RCTBubblingEventBlock onHeightChange;
@property (nonatomic, copy) RCTBubblingEventBlock onLinkPress;

- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;

- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher NS_DESIGNATED_INITIALIZER;

@end
