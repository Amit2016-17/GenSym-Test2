package com.gensym.classes;

import com.gensym.classes.G2TestBase;
import com.gensym.util.Symbol;
import com.gensym.util.symbol.SystemAttributeSymbols;
import org.junit.Test;

import static org.assertj.core.api.Assertions.assertThat;

public class FunctionDefinitionImplTest extends G2TestBase<FunctionDefinitionImpl> {

    @Override
    protected Class<FunctionDefinitionImpl> forClass() {
        return FunctionDefinitionImpl.class;
    }

    @Test
    public void test_setAuthors_GivenValue_SetsAsAttributeValue() throws Exception {
        instance.setAuthors(getStub(com.gensym.util.Structure.class));

        assertThat(attributes.getAttributeValue(SystemAttributeSymbols.AUTHORS_)).isEqualTo(getStub(com.gensym.util.Structure.class));
    }
    @Test
    public void test_getAuthors_HadPreviouslySetAttributeValue_ReturnsExpected() throws Exception {
        attributes.setAttributeValue(SystemAttributeSymbols.AUTHORS_, getStub(com.gensym.util.Structure.class));

        assertThat(instance.getAuthors()).isEqualTo(getStub(com.gensym.util.Structure.class));
    }


    @Test
    public void test_getChangeLog_HadPreviouslySetAttributeValue_ReturnsExpected() throws Exception {
        attributes.setAttributeValue(SystemAttributeSymbols.CHANGE_LOG_, getStub(com.gensym.util.Sequence.class));

        assertThat(instance.getChangeLog()).isEqualTo(getStub(com.gensym.util.Sequence.class));
    }


}