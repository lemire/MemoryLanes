//
//  ViewController.m
//  mofongo
//
//  Created by Benoit Maison on 05/11/2018.
//  Copyright © 2018 Vision Smarts. All rights reserved.
//

#import "ViewController.h"

#import "MessageParser.h"

int measure(size_t length, char* result);
    

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self performSelector:@selector(benchmark) withObject:nil afterDelay:1.0];
}

- (void)benchmark {
    char result[10000];
    size_t length = 1 << 25;
    measure(length, result);
    self.topText.text = [NSString stringWithUTF8String:result];
}

@end

