//
//  AQWebViewController2.h
//  AQDemo
//
//  Created by madding.lip on 7/22/16.
//  Copyright © 2016 Peng Li. All rights reserved.
//

#import "AQViewController.h"
#import "AQHybrid.h"

@interface AQWebViewController2 : AQViewController<UIWebViewDelegate>

@property(nonatomic, retain) AQHybrid* bridge;
@property(nonatomic, retain) UIWebView* webView;

@end