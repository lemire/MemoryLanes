//
//  MessageParser.h
//  Mofongo
//
//  Created by Benoit Maison on 07/11/2018.
//  Copyright © 2018 Vision Smarts. All rights reserved.
//

#ifndef MessageParser_h
#define MessageParser_h

@interface MessageParser:NSObject
{

}

+ (NSArray*) parseMessage:(NSData*)msg;
+ (void) prettyPrint:(NSArray*)msg;

@end

#endif /* MessageParser_h */
