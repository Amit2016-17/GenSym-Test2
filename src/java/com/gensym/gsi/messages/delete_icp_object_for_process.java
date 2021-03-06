
package com.gensym.gsi.messages;

import com.gensym.gsi.*;
import com.gensym.gsi.types.*;
import java.io.IOException;

import com.gensym.util.Symbol;

public class delete_icp_object_for_process implements ICPMessage {
    public static short messageCode = 163;
    private ICPStream stream = null;

    int corresponding_icp_object_index = 0;
    Symbol name_of_corresponding_icp_object_index_space = null;

    public delete_icp_object_for_process () {}
    public delete_icp_object_for_process (int corresponding_icp_object_index, Symbol name_of_corresponding_icp_object_index_space) {
        this.corresponding_icp_object_index = corresponding_icp_object_index;
        this.name_of_corresponding_icp_object_index_space = name_of_corresponding_icp_object_index_space;
    }
    @Override
    public void read (ICPInputStream inputStream)
        throws IOException {
        corresponding_icp_object_index = CORRESPONDING_ICP_OBJECT_INDEX.read(inputStream);
        name_of_corresponding_icp_object_index_space = SYMBOL.read(inputStream);
        inputStream.readICPMessageGroupEnd();
    }
    @Override
    public void write (ICPOutputStream outputStream)
        throws IOException {
        stream = outputStream;
        SYMBOL.initialWrite(name_of_corresponding_icp_object_index_space,outputStream);
        outputStream.writeICPByte(messageCode);
        CORRESPONDING_ICP_OBJECT_INDEX.write(corresponding_icp_object_index,outputStream);
        SYMBOL.write(name_of_corresponding_icp_object_index_space,outputStream);
        outputStream.endICPMessageGroup();
    }
    @Override
    public void run (GSISocket sck) throws IOException {
    }
}
