//
//  MessageParser.m
//  Mofongo
//
//  Created by Benoit Maison on 07/11/2018.
//  Copyright © 2018 Vision Smarts. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MessageParser.h"

@interface MessageParser ()
    
@end

@implementation MessageParser

//static char separators[4]= {'\x1C', '\x1D', '\x1E', '\x1F'};

NSArray* parse(NSData* msg, int level, int levelmax) {
    NSMutableArray* ret = [NSMutableArray new];
    //char* bytes = (char *) msg.bytes;    
    return ret;
    
}


+ (NSArray*) parseMessage:(NSData*)msg
{
    return parse(msg, 0, 3);
}

+ (void) prettyPrint:(NSArray*)msg
{
    
    

}


@end
